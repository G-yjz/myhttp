### 编译

```
make
```

生成myhttp执行文件

![image-20220727144323000](./image/image-20220727144323000.png)

```
cd httpdocs
```

进入httpdocs文件夹

```
gcc get_test.c -o get.cgi
```

生成get.cgi文件

```
gcc post_test.c -o post.cgi
```

生成post.cgi文件

![image-20220727144240906](./image/image-20220727144240906.png)

### 测试

```
cd ,,
./myhttp
```

![image-20220727144544612](./image/image-20220727144544612.png)

```
在浏览器输入 http://localhost:6379
```

![image-20220727144823018](./image/image-20220727144823018.png)



```
输入 http://localhost:6379/getcase.html
```

![image-20220727145040725](./image/image-20220727145040725.png)

![image-20220727145059882](./image/image-20220727145059882.png)

```
输入 http://localhost:6379/postcase.html
```

![image-20220727145156842](./image/image-20220727145156842.png)

![image-20220727145221378](./image/image-20220727145221378.png)

### 框架

![myhttp](./image/myhttp.png)

