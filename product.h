#ifndef PRODUCT_H
#define PRODUCT_H

//建造者模式（Builder Pattern），
//旨在将一个复杂对象的构建与它的表示分离，使得同样的构建过程可以创建不同的表示

//创建产品

#include <iostream>
#include <string>

using namespace std;

class Computer
{
   public:
    void SetmCpu(string cpu){m_strCPU = cpu;}
    void SetMainBoard(string mainboard){m_strMainboard = mainboard;}
    void SetRam(string ram){m_strRam = ram;}
    void SetVideoCard(string videocard){m_strVideoCard = videocard;}

    string GetmCpu(){return m_strCPU;}
    string GetMainBoard(){return m_strMainboard;}
    string GetRam(){return m_strRam;}
    string GetVideoCard(){return m_strVideoCard;}

   private:
    string m_strCPU;      //CPU
    string m_strMainboard;//主板
    string m_strRam;      //内存
    string m_strVideoCard;//显卡
};

#endif // PRODUCT_H
