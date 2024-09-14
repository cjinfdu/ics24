# ICS-Fall24-Fudan-Website

## ICS LAB 网站开发引导

### LAB设计的往年参考资料

老师的仓库会有一个**私有仓库**，开发的同学找老师要collaborator权限。新学期需要新建一个公共仓库，并上传lab。

### 网站开发principle

为了防止学生可以通过github找到往年的WP，我们设定如下：

1. 往年的答案只能存在于开发同学的电脑、老师的**私有仓库**中，绝对不可以放在公共仓库中，最好也不要出现在历史commit里。
2. 往年资料需要全部留存，方便未来开发lab。
3. 本学期LAB网站所发布的所有内容，都需要在公共仓库内。

### 网站初次开发步骤如下：

1. 通过**zip**下载老师的**私有仓库**ics的main分支。这样就没有git信息，如果是通过git clone获得的，可以通过版本回溯获得曾经的修改，而过去的版本可能含有WP。
2. 解压zip，并分发所有往年lab给各个TA，然后删除文件夹中所有往年的lab内容，并继续开发。
3. 简单看看hexo的用法，并进行主页等信息的修改（记得修改全部年份），并修改配置文件中的url、分支等信息。
4. 让老师新建一个公共仓库，并将你做好的内容push上去，web分支应该是由hexo deploy自动推送的。
5. 让老师修改网页默认分支，Settings > Pages > Source 选择你开发出来的web分支。（需要老师操作是因为collaborator没有settings权限）

### 网站后续更新步骤如下：

1. 在老师的公共仓库进行修改，然后commit。

### 网站归档步骤如下：

1. 每学期结束需要进行网站归档，将网站内容保存到私有仓库中，作为当年的分支，并删除公有仓库。（也可以考虑采用直接私有化该仓库的方法，那么后面部分可以无视）
2. main分支即开发部分可以不予留存（看心情，也可以留个main+年份的分支）。
3. web分支即网页部分，全部留存。
4. 把需要留存的部分（记得**用年份命名好**，避免覆盖往年分支），全部推到老师的**私有仓库**，然后确定**私有仓库**正确存储信息后，删除公共仓库。

## 下面是hexo使用教程

### Install

After pull this repo with git, you can cd into the directory and run this command to install hexo:

```sh
npm install --registry=http://registry.npmmirror.com
```

### How to use?

CAUTION: Please be sure to `git pull` before you do any change.

The `source` directory is the place to put **markdown files** and assets.
The index page corresponds to `source/index.md`.

`_config.yml` contains basic settings while `_config.cactus_white.yml` contains some theme-related settings.

#### EXAMPLE: publish a new page

0. `git pull`
1. `hexo new <page_title>` to automatically generate a md file and an assets' dir in `source/_posts`
2. write your content and assets into the generated file/dir.
3. update `sourse/index.md` to add the link to your new page
3. `hexo g` to generate corresponding page
4. `hexo s` to start a server, which allows you to check the generated webpage.
5. `git pull` in case there are other changes.
6. `hexo d` to deploy the new site into the webpage repo.
7. `git add .` and commit your change. `git push` to sync.

