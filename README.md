## cordova-plugin-native

### 官方的文档杂乱无用

### js文件

一定要使用`module.exports `

### ios源文件

继承自`CDVPlugin`


## 使用

```
cordova plugin add **
```
`JavaScript`中`onDeviceReady`之后,使用如下代码
```
echo("I love you. You are so beautiful.",function (info) {
    console.log(info);
});
```

```
cordova platform add ios
```

```
cordova perpare ios
```

```
run in Xcode
```

## 需求

iOS中,页面之间如何切换?
两种方式:
1. 外面包裹NavigationController,切换的时候使用NavigationController.push,好处是进入页面2 可以返回页面1
2. presentViewController(弹窗), 优点是不需要在外面包裹,缺点是无法直接有页面2 返回页面1,需要页面2手动处理。

问题的难点有两个:
1. Cordova plugin如何创建
2. 如何使用Core Data




### 参考

- [Plugin Development Guide](https://cordova.apache.org/docs/en/latest/guide/hybrid/plugins/index.html)
- [iOS Plugin Development Guide](https://cordova.apache.org/docs/en/latest/guide/platforms/ios/plugin.html)