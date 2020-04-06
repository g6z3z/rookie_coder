#### 1.local git link github
#### 1.1 通过git bash 登录GitHub
     git config --global user.name "your name"
     git config --global user.email "********"
#### 1.2 生成ssh
    ssh-keygen -t rsa -C "email.com"
    copy 密钥到github SSH and GPG key
    ssh -T git@github.com 验证是否成功
#### 1.3 
