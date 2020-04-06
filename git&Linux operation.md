### ****local git link github****
#### 1.1 通过git bash 登录GitHub
     git config --global user.name "your name"
     git config --global user.email "********"
#### 1.2 生成ssh
    ssh-keygen -t rsa -C "email.com"
    copy 密钥到github SSH and GPG key
    ssh -T git@github.com 验证是否成功
#### 1.3 git command 
     git pull origin master
     git init
     git add file   
     git remote add origin https://git......git
     git commit -m "......"
     git push -u origin master
#### 1.4 git merge 
     Ubuntu下解决merge方法：
     我这边的具体操作: ubuntu下不需要键入 i 就可以直接输入merge信息，你可以参照Mac我说的步骤，输入merge信息后直接ctrl+x，然后终端会问你是否保存最新缓冲区，选择保存，然后还会有一个次问你把最新的merge信息保存到那个文件，我没有创建新的文件，直接Enter,就OK。

### ================================
### ****linux command****
#### sudo mv sourcepath targetpath
