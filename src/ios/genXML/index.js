var fs = require('fs-extra');
var dirName = '../Resourse/';
const rootPath = 'src/ios/';
const xml = 'resourse.xml';
//清空
fs.writeFileSync(xml, '')

function getAllFile(dirName) {
    var n = fs.readdirSync(dirName);
    n.forEach((item, index) => {
        var files = fs.statSync(dirName + item);
        if (files.isDirectory()) {
            // .svn .git delete
            if (/^\.svn|\.git$/.test(item)) {
                fs.removeSync(dirName + item)
            }else if (/\.bundle$/.test(item)) {
                fs.appendFileSync(xml,`<resource-file src="src/ios/${dirName.slice(3)}${item}" />\n`)
            }else if (/\.xcdatamodeld$/.test(item)) {
                fs.appendFileSync(xml,`<resource-file src="src/ios/${dirName.slice(3)}${item}" />\n`)
            }else{
                getAllFile(dirName + item + '/');
            }
        } else {
            if (/^\.DS_Store$/.test(item)) {
                fs.removeSync(dirName + item);
            }else if (/\.h$/.test(item)) {
                fs.appendFileSync(xml,`<header-file src="src/ios/${dirName.slice(3)}${item}" />\n`)
            }else if(/\.m$/.test(item)){
                fs.appendFileSync(xml,`<source-file src="src/ios/${dirName.slice(3)}${item}" />\n\n`)
            }else if(/\.xib|png|wav|pch$/.test(item)){
                fs.appendFileSync(xml,`<resource-file src="src/ios/${dirName.slice(3)}${item}" />\n\n`)
            }else{
                console.log(dirName + item);
            }
        }
    })
}
getAllFile(dirName);
