var cordova = require('cordova'),
    exec = require('cordova/exec');
window.native = function (str, callback) {
    cordova.exec(callback, function (err) {
        callback('open native error.');
    }, "EchoABC", "echo", [str]);
};
module.exports = window.native;
