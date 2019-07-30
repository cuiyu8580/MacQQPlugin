
[![platform](https://img.shields.io/badge/platform-macos-lightgrey.svg)](https://www.apple.com/macos) [![release](https://img.shields.io/badge/release-v1.0.0-brightgreen.svg)](https://github.com/cuiyu8580/MacQQPlugin/releases)  [![support](https://img.shields.io/badge/support-QQ%206.5.5-blue.svg)](http://im.qq.com/macqq/)
[![GitHub license](https://img.shields.io/github/license/cuiyu8580/MacQQPlugin.svg)](./LICENSE)

# QQ助手 v1.0.0
---

## 功能

* 消息自动回复
* 消息防撤回
* 自动抢红包
* alfred 快捷发送消息 & 打开窗口 & 查看聊天记录

---

### 更新日志
* 新增自动抢红包(2019-07-30)   


---
### 安装

~~第一次安装需要输入密码，仅是为了获取写入微信文件夹的权限~~

#### 1. 需要安装Git


打开`应用程序-实用工具-Terminal(终端)`，执行下面的命令安装

`cd ~/Downloads && rm -rf MacQQPlugin && git clone https://github.com/cuiyu8580/MacQQPlugin.git --depth=1 && ./MacQQPlugin/Other/Install.sh`


#### 2. 普通安装

* 点击`clone or download`按钮下载 MacQQPlugin 并解压，打开Terminal(终端)，拖动解压后`Install.sh` 文件(在 Other 文件夹中)到 Terminal 回车即可。

#### 3. 安装完成

* 重启微信，在**菜单栏**中看到**QQ助手**即安装成功。




---

### 使用

* 消息防撤回：点击`开启消息防撤回`或者快捷键`command + shift + t`,即可开启、关闭。
* 自动回复：点击`开启自动回复`或者快捷键`conmand + shift + k`，将弹出自动回复设置的窗口，点击红色箭头的按钮设置开关。    

>若关键字为 `*`，则任何信息都回复；
>若关键字为`x|y`,则 x 和 y 都回复；
>若关键字**或者**自动回复为空，则不开启该条自动回复;
>若开启正则，请确认正则表达式书写正确，[在线正则表达式测试](http://tool.oschina.net/regex/)
> 可设置延迟发送回复，单位：秒.

![自动回复设置.png](./Other/ScreenShots/auto_reply.png)

* Alfred 使用：跟 微信`Alfred`类似，关键字为`q`. 

---

### 卸载

将项目中的`./Other/Uninstall.sh`拖到`Terminal`(终端)运行即可.

---

### 依赖

* [XMLReader](https://github.com/amarcadet/XMLReader)
* [insert_dylib](https://github.com/Tyilo/insert_dylib)
* [fishhook](https://github.com/facebook/fishhook)
* [GCDWebServer](https://github.com/swisspol/GCDWebServer)   
* [Alfred-Workflow](http://www.deanishe.net/alfred-workflow/index.html)

---


### 免责声明
* 使用插件有风险，使用需谨慎。
* 软件仅供技术交流，禁止用于商业及非法用途，如产生法律纠纷与本人无关。


