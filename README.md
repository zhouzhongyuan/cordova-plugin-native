# cordova-plugin-native

## Native代码约定

- [iOS](./iOS.md)
- [Android](./Android.md)


## 解决bug流程
1. @叁認壹木提出bug
2. @贱莮孒 和 @两极 自行解决问题
3. 通过自测流程进行测试
4. 测试成功，告知 @叁認壹木 和 中原(工作)


## Android/iOS开发人员指南(自测)


### 1.更新约定文件

[github地址](https://github.com/zhouzhongyuan/cordova-plugin-native)

#### Android：
- `nativeapp.aar` 和 `nativeapp.gradle`
- 所在文件夹`cordova-plugin-native/src/android/libs`

#### ios: 
- 文件：`ZJNative.framework`, `ZJNativeBundle.bundle`
- 所在文件夹`cordova-plugin-native/src/ios/libs/`



### 2. 打包

- 打开
  - Android:打开[task 1500341106000](https://dev.bokesoft.com/yigomobile/add?taskid=1500341106000)
  - iOS:打开[task 1500341106000](https://dev.bokesoft.com/yigomobile/add?taskid=1500343714000)


- 无须做任何修改,点击『打包』按钮。
- 等待大约5~10分钟，去[历史](https://dev.bokesoft.com/yigomobile/history)中找到你刚才打的包。

### 3. 自行测试

如果测试发现问题，重复 步骤1 和 步骤2

### 4. 清理

- 在打包网站上，删除刚才添加的任务。




## 旧

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