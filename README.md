﻿# **员工管理系统**  
## **项目简介**  
## **软件架构**
### 环境搭建  
window10 操作系统  
visual studio 2022（或其它版本） 开发IDE  
draw.io 流程图绘制工具  
< ？> 原型图绘制工具
### 使用技术
c++面向对象及文件流  
easyx图形库  
git tortoise——git版本分布式控制系统图形化工具   
（基于实际情况考虑使用cppline）
### 流程图及原型图 
### 基本思路 
 基本功能  
+ 一个管理类，用来实现（菜单显示），增删改查，文件交互  
+ UI界面类： 用来负责界面的展示与用户的交互  
+ 员工类：一个基类，三个派生类(boss,manager,worker)，包含不同的成员属性，包含基本信息，考勤，绩效，工资  
+ 将不同的功能信息，基本信息，考勤，绩效，工资存储到不同的文件
     
可扩展功能  
+ 登录（登录类），背景音乐，点击音效等  
#### 两种架构
##### 模块架构设计  
概述  
该系统为一个基于控制台的员工管理系统，旨在为企业提供员工信息的增删改查、考勤信息的管理、绩效信息的管理和薪资信息的管理等功能。  
+ 功能模块  
该系统主要包含以下四个功能模块：  
1.员工基本信息管理  
2.员工考勤信息管理  
3.员工绩效信息管理  
4.员工薪资信息管理  
+ 数据存储  
&nbsp;&nbsp;&nbsp;&nbsp;所有员工信息、考勤信息、绩效信息、薪资信息等数据都将以文本文件的形式存储在本地磁盘中。  
&nbsp;&nbsp;&nbsp;&nbsp;文件格式：以CSV格式存储，每个文件对应一个功能模块的信息。  
&nbsp;&nbsp;&nbsp;&nbsp;文件命名：根据不同的功能模块，命名规则为 "功能模块名称.csv"。  
+ 登录模块  
&nbsp;&nbsp;&nbsp;&nbsp;实现简单的用户登录功能，可通过用户名和密码进行登录。  
&nbsp;&nbsp;&nbsp;&nbsp;用户名和密码将以明文形式存储在本地文件中，登录时从文件中读取进行验证。  
&nbsp;&nbsp;&nbsp;&nbsp;登录成功后，用户将进入主界面，可以进行相应的操作。  
+ 图形界面  
&nbsp;&nbsp;&nbsp;&nbsp;使用EasyX图形库实现图形化界面，主要功能模块以按钮形式展示。  
&nbsp;&nbsp;&nbsp;&nbsp;主界面包含功能模块的按钮，用户可以通过点击按钮进入相应的模块进行操作。  
+ 类设计  
&nbsp;&nbsp;&nbsp;&nbsp;为每个功能模块设计一个类，类中包含该模块的操作函数。  
&nbsp;&nbsp;&nbsp;&nbsp;使用面向对象的编程思想，通过调用类中的函数实现相应的功能。  
+ 数据结构设计  
&nbsp;&nbsp;&nbsp;&nbsp;为每个功能模块设计相应的数据结构，如员工基本信息的结构体，考勤信息的结构体等。  
&nbsp;&nbsp;&nbsp;&nbsp;采用数据结构来存储和管理数据，便于程序的编写和维护。  
+ 程序流程  
1.用户登录系统，进入主界面。  
2.用户可以选择需要进行的功能模块，进入对应的界面。  
3.用户在界面上可以进行相应的操作，如添加员工信息、修改考勤信息等。  
4.程序根据用户的操作调用相应的类中的函数实现操作。  
5.用户在进行完相应操作后，可以返回到主界面，或退出程序。  
+ 可扩展性  
&nbsp;&nbsp;&nbsp;&nbsp;该系统的设计可扩展性强，可根据实际需求添加或删除相应的功能模块。  
&nbsp;&nbsp;&nbsp;&nbsp;可以根据实际需要优化数据存储方式，如采用数据库来存储数据。  
&nbsp;&nbsp;&nbsp;&nbsp;可以根据实际需要优化图形界面设计，如添加更多的按钮和菜单等。  
##### 三层架构设计 
1. 系统概述  
该员工管理系统旨在帮助企业管理员工的基本信息、考勤信息、绩效信息和薪资信息。系统采用三层架构，分为展示层、业务逻辑层和数据访问层。  
2. 系统架构  
2.1 展示层  
展示层是系统的用户界面，负责展示数据和接收用户的操作。在该系统中，展示层使用 EasyX 图形库实现。主要包括以下功能：  
登录：用户输入用户名和密码，系统验证后进入主界面。  
&nbsp;&nbsp;&nbsp;&nbsp;主界面：分别列出员工基本信息、考勤信息、绩效信息和薪资信息的功能按钮，用户可以根据需要进行查看、添加、修改和删除操作。  
&nbsp;&nbsp;&nbsp;&nbsp;操作界面：根据用户选择的功能，展示相应的表单和数据。  
2.2 业务逻辑层  
业务逻辑层是系统的核心，负责处理用户的操作请求和相应的业务逻辑。在该系统中，业务逻辑层主要包括以下功能：  
&nbsp;&nbsp;&nbsp;&nbsp;登录验证：接收用户输入的用户名和密码，验证用户身份，返回验证结果。  
&nbsp;&nbsp;&nbsp;&nbsp;数据处理：对用户的操作请求进行处理，包括添加、修改、删除和查询操作，以及相应的数据验证和格式转换。  
&nbsp;&nbsp;&nbsp;&nbsp;日志记录：记录用户的操作记录，包括操作时间、用户信息、操作类型和操作结果等。  
2.3 数据访问层  
数据访问层负责与数据库进行交互，实现数据的读取、写入和修改。在该系统中，数据访问层采用文件流的方式进行数据存储和访问，主要包括以下功能：  
&nbsp;&nbsp;&nbsp;&nbsp;文件读取：从文件中读取数据。  
&nbsp;&nbsp;&nbsp;&nbsp;文件写入：将数据写入到文件中。  
&nbsp;&nbsp;&nbsp;&nbsp;文件修改：修改文件中的数据。  
3. 系统流程  
3.1 登录流程  
1.用户输入用户名和密码。  
2.系统验证用户名和密码，返回验证结果。  
3.若验证通过，进入主界面。  
3.2 主界面流程  
1.用户选择需要进行的操作。  
2.系统根据用户选择的功能，跳转到相应的操作界面。  
3.3 操作界面流程  
1.用户进行数据的添加、修改、删除和查询等操作。  
2.系统对用户的操作进行数据验证和格式转换。  
3.系统将用户的操作记录下来，并提示操作结果。  
  
  
总结  
&nbsp;&nbsp;&nbsp;&nbsp;以上是本次员工管理系统的三层架构设计。表示层用 easyX 实现图形界面，业务逻辑层定义了各项业务逻辑和规则并封装成相应的类，数据访问层则定义了用于数据读取和存储的类。这种设计方式能够将系统的不同部分分离开来，使得系统更易于维护和扩展。  
##### 三层架构设计和模块架构设计有什么区别
&nbsp;&nbsp;&nbsp;&nbsp;三层架构和模块设计的主要区别在于架构的层次结构。三层架构将应用程序分为三个主要的层：表示层、业务逻辑层和数据访问层。而模块设计主要是将应用程序按照功能划分为不同的模块，每个模块负责一个或多个相关的功能。  
&nbsp;&nbsp;&nbsp;&nbsp;三层架构的目的是为了实现应用程序的分层和解耦，使得不同的层可以独立开发、测试、维护和扩展。每一层都有特定的职责和功能，如表示层负责显示用户界面，业务逻辑层负责处理业务逻辑，数据访问层负责与数据库进行交互。  
&nbsp;&nbsp;&nbsp;&nbsp;而模块设计则更加注重模块之间的关系，通常会将相似的功能放在同一个模块中，以便于维护和扩展。模块设计不涉及到具体的层次结构，因此可以在同一层或跨越多个层进行划分。  
&nbsp;&nbsp;&nbsp;&nbsp;总的来说，三层架构注重的是分层和解耦，而模块设计注重的是功能划分和模块化。两种架构都有各自的优点和适用场景，可以根据实际需求选择使用。  

##### 我的作业更适合用哪种架构设计（chatgpt的建议）
&nbsp;&nbsp;&nbsp;&nbsp;根据你的需求和技术限制，使用模块化设计可能更适合你的作业。  
&nbsp;&nbsp;&nbsp;&nbsp;因为三层架构一般需要使用数据库和前端技术，而你说你们不会 MySQL 和前端技术。  
&nbsp;&nbsp;&nbsp;&nbsp;另外，如果使用三层架构，需要增加业务逻辑层，这可能会增加开发的复杂性和时间。而使用模块化设计，则可以将整个系统划分为多个模块，每个模块完成自己的功能，降低了模块之间的耦合性，也更加灵活。  
&nbsp;&nbsp;&nbsp;&nbsp;所以根据你的技术限制和需求，建议采用模块化设计来实现员工管理系统。
### 函数设计  
  
  
## 开发流程  
确定项目需求（立项）——制定需求文档和流程图原型图——项目架构——（当前进度）  
学习相关技术栈——开发——整合——测试——报告制作——录制答辩视频
## 参考资料
[编程语法规范](https://gitee.com/zero-awei/hello-gitee/blob/doc/documents/%E5%8F%82%E8%80%83%E8%B5%84%E6%96%99/zh-google-styleguide-20220529.pdf)
（是否使用应情况而定）