# CMDU_DDE_DOCK
深度 Linux 系统网速任务栏插件，鼠标悬浮显示开机时间、CPU使用率、内存使用率、下载字节、上传字节。  

![alt](preview.png)  

改进：网速全统计，不再有为 0 的情况。  
安装：终端 ./install.sh  
卸载：终端 ./uninstall.sh  

## Use cmake
You can use cmake to build the plugin
### Compile
```shell
mkdir build && cd build
cmake ..
make
```
### Install
Install libCMDU.so to /usr/lib/dde-dock/plugins
```shell
sudo make install
```
And then, restart dde-dock
```shell
killall dde-dock
```
