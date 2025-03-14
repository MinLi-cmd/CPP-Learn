/*
* C++中对文件操作需要包含头文件<fstream>（文件流）
*
* 文本类型分为两种：
* 1.文本文件 - 文件以文本的 ASCLL码 形式存储在计算机中
* 2.二进制文件 - 文件以文本的 二进制 形式存储在计算机中，用户一般不能直接读懂它们
*
*操作文件的三大类：
* 1.ofstream:写操作		o:OutPut f:file stream : 流
* 2.ifstream : 读操作	i:Input	 f:file stream : 流
* 3.fstream : 读写操作			 f:file stream : 流
* 
* 文件打开方式：
* ios::in --------- 为读文件而打开文件
* ios::out -------- 为写文件而打开文件
* ios::ate -------- 初始位置：文件尾
* ios::app -------- 追加方式写文件
* ios::trunc ------ 如果文件存在先删除，再创建
* ios::binary ----- 二进制方式
* 
* 
* 
* 注意：文件打开方式可以配合使用，利用|操作符
* 例如：用二进制写文件 ios::binary | ios::out
*/