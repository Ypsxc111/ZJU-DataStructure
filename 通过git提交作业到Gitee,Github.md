# 通过git提交作业到Gitee/Github

> # 用户基本配置

1. `git init`在当前文件夹下初始化。
2. `git config --global user.name"****"`配置用户名。
3. `git config --global user.email"****@seu.edu.cn"`配置邮箱。

---

> # 基本功能使用

1. `git clone https://*****(URL)`将远程仓库克隆到本地。

2. `cd <文件夹>`将待提交作业放入文件夹内。

3. `git status`查看*工作区*状态。

   > 若有新文件变动，则会出现显示红色的`文件`/`文件夹`。

4. `git add .`将所有改动过的文件，加入到*暂存区*

5. `git status`再次查看工作区状态。

   > 若出现一堆绿色的`文件`/`文件夹`,则说明新文件添加到暂存区成功。

6. `git commit -m"提交介绍说明"`将暂存区的文件提交到本地仓库。

7. `git status`查看状态。

   > 若显示`nothing to commit,working tree clean`，则所有上传文件都已经保存至本地仓库。

8. `git push`将本地仓库传到Gitee远程仓库。就可以将本地仓库的文件上传到远程仓库。

9. 在远程仓库中`Pull Requests`,将自己的作业提交到老师的仓库中。

---

> # 远程仓库改名后，本地仓库需要的操作

1. 首先查看本地仓库对应的远程仓库名，此时显示出远程仓库修改前的仓库名

   ```bash
   git remote -v
   ```

   

2. 修改连接，其中xxxx.git为修改后的仓库的url

   ```bash
   git remote set-url origin xxxxx.git

3. 再次push，不报错，表示成功

4. git push可能会报错，并且两次提示输入用户名以及密码，如果报错参考：[参考链接]( https://www.cnblogs.com/Jaywhen-xiang/p/12335483.html 参考链接)