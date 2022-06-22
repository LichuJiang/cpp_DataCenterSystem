/*
* program name: crtsurfdata2.cpp   this program used to generate the data of weather station
* author: Lichu Jiang
*/

#include "_public.h"

struct st_code
{
  char provname[31]; //省
  char obtid[11];    //站号
  char obtname[31];  //站名
  double lat;        //纬度
  double lon;        //经度
  double height;     //海拔高度
};
//存放全国气象站点参数的容器
vector<struct st_stcode> vstcode;

//把站点参数文件中加载到vstcode容器中
bool LoadSTCode(const char *inifile);


CLogFile logfile;

int main(int argc, char *argv[]){
  //inifile outpath logfile
  if(argc!=4){
    printf("Using:./crtsurfdata2 inifile outpath logfiel\n");
    printf("Example:/project/idc1/bin/crtsurfdata2 /project/idc1/ini/stcode.ini /tmp/surfdata /log/idccrtsurfdata2.log\n\n");    
    printf("inifile  全国气象站点参数文件名 \n");
    printf("outpath  全国气象站点数据文件存放的目录 \n");
    printf("logfile  本程序运行的日志文件名 \n\n");
    
    return -1;
    }

    if(logfile.Open(argv[3])==false){
	printf("logfile.Open(%s) failed.\n",argv[3]);
	return -1;
    }
    logfile.Write("crtsurfdata2 开始运行 \n");

    //处理业务的代码
    //把站点参数文件中加载到vstcode容器中
    if(LoadSTCode(argv[1])==false) return -1;

    logfile.Write("crtsurfdata2 运行结束 \n");
    return 0;
}

//把站点参数文件中加载到vstcode容器中
bool LoadSTCode(const char *inifile){
  
}
