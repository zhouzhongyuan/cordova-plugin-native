# Android说明

## 不要使用Android-25，最高使用23.0.1
## 文件
- nativeapp.aar
- nativeapp.gradle
- nativeapp文件夹。生成nativeapp.aar的源代码文件夹(文件夹名称和Project名称都为nativeapp)
- ativeapp-test文件夹。测试调用的nativeapp.aar的文件夹(文件夹名称和Project名称都为nativeapp-test)

把上述4个文件/文件夹放在zijiang文件夹下，压缩成zijiang.zip，通过QQ发送。

### nativeapp.aar
- 调用aar的activity的name必须是
```
cordova.plugin.nativeapp.HomeActivity
```
- 生成aar的时候，targetVersion最高为23

### nativeapp.gradle
- [nativeapp.gradle下载](https://github.com/zhouzhongyuan/cordova-plugin-native/blob/master/src/android/libs/nativeapp.gradle)
- 只能修改16-27行
- 注意版本。不要使用25，最高使用23.0.1。

例如：

不能使用
```
compile 'com.android.support:recyclerview-v7:25.0.1'
```
可以使用：
```
compile 'com.android.support:recyclerview-v7:23.0.1'
```

com.karumi:dexter版本：

~~compile 'com.karumi:dexter:4.0.0'~~
compile 'com.karumi:dexter:2.4.0'

### nativeapp(文件夹)
- 独立的Android项目
- 注意版本。

### nativeapp-test(文件夹)
- 独立的Android项目
- 调用的时候的activity的name必须是`cordova.plugin.nativeapp.HomeActivity
- 注意版本。
