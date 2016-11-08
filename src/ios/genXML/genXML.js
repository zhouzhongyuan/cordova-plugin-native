var fs = require('fs-extra');
var dirName = 'Resourse/';
const rootPath = 'src/ios/';


function getAllFile(dirName) {
    var n = fs.readdirSync(dirName);
    n.forEach((item, index) => {
        var files = fs.statSync(dirName + item);
        if (files.isDirectory()) {
            // console.log(dirName + item + '/');
            getAllFile(dirName + item + '/');
        } else {
            if (/\.h$/.test(item)) {
                // console.log(item);
                fs.appendFileSync('fix.xml',`<header-file src="src/ios/${dirName}${item}" />\n`)
            }else if(/\.m$/.test(item)){
                fs.appendFileSync('fix.xml',`<source-file src="src/ios/${dirName}${item}" />\n\n`)
            }else if(/\.xib|png|wav|pch$/.test(item)){
                // console.log(dirName + item);
                fs.appendFileSync('fix.xml',`<resource-file src="src/ios/${dirName}${item}" />\n\n`)
            }else{
                console.log(dirName + item);
            }
        }
    })
}
getAllFile(dirName);


/*getAllFiles(dirName,function (data) {
    console.log(data)
})


function getAllFiles(dir, callback) {
    var filesArr = [];
    dir = ///$/.test(dir) ? dir : dir + '/';
        (function dir(dirpath, fn) {
            var files = fs.readdirSync(dirpath);
            async(files, function (item, next) {
                var info = fs.statSync(dirpath + item);
                if (info.isDirectory()) {
                    dir(dirpath + item + '/', function () {
                        next();
                    });
                } else {
                    filesArr.push(dirpath + item);
                    callback && callback(dirpath + item);
                    next();
                }
            }, function (err) {
                !err && fn && fn();
            });
        })(dir);
    return filesArr;
}*/




