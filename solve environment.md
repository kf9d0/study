#### sublime text 3

打开控制台 C + ~ 或 View > Show Console

##### install Package Control
输入
``` bash
import urllib.request,os,hashlib; h = '6f4c264a24d933ce70df5dedcf1dcaee' + 'ebe013ee18cced0ef93d5f746d80ef60'; pf = 'Package Control.sublime-package'; ipp = sublime.installed_packages_path(); urllib.request.install_opener( urllib.request.build_opener( urllib.request.ProxyHandler()) ); by = urllib.request.urlopen( 'http://packagecontrol.io/' + pf.replace(' ', '%20')).read(); dh = hashlib.sha256(by).hexdigest(); print('Error validating download (got %s instead of %s), please try manual install' % (dh, h)) if dh != h else open(os.path.join( ipp, pf), 'wb' ).write(by)
```
回车 安装 重启

##### solve Chinese GBK 乱码
按 Ctrl + Shift + P 打开万能搜索框，
输入 install package 回车，查看packages列表，
输入 ConvertToUTF8 回车，无需重启。
