/*
* program name: crtsurfdata2.cpp   this program used to generate the data of weather station
* author: Lichu Jiang
*/

#include "_public.h"

CLogFile logfile;

int main(int argc, char *argv[]){
  //inifile outpath logfile
  if(argc!=4){
    printf("Using:./crtsurfdata2 inifile outpath logfiel\n");
    printf("Example:/project/idc1/bin/crtsurfdata2 /project/idc1/ini/stcode.ini /tmp/surfdata /log/idccrtsurfdata2.log\n\n");    
    printf("inifile  全国气象沾点参数文件名 \n");
    printf("outpath  全国气象沾点数据文件存放的目录 \n");
    printf("logfile  本程序运行的日志文件名 \n\n");
    
    return -1;
    }

    if(logfile.Open(argv[3])==false){
	printf("logfile.Open(%s) failed.\n",argv[3]);
	return -1;
    }
    logfile.Write("crtsurfdata2 开始运行 \n");
    logfile.Write("crtsurfdata2 运行结束 \n");
    return 0;
}
