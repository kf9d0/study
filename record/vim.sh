sudo apt-get install vim-gtk
shdo -y install vim*

# docker ubuntu
vi ~/.vimrc
set expandtab
set tabstop=2
set shiftwidth=2
set softtabstop=2
set smarttab
set ai
set si
set wrap
set sw=2

sudo vim /etc/vim/vimrc
syntax on
set nu                           // 在左侧行号
set tabstop                  //tab 长度设置为 4
set nobackup               //覆盖文件时不备份
set cursorline               //突出显示当前行
set ruler                       //在右下角显示光标位置的状态行
set autoindent             //自动缩进
