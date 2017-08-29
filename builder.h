#ifndef BUILDER_H
#define BUILDER_H

//创建抽象建造者
#include "product.h"

class IBuilder
{

public:
    virtual void BuildCpu()=0;       //创建CPU
    virtual void BuildMainboard()=0; //创建主板
    virtual void BuildRam()=0;       //创建内存
    virtual void BuildVideoCard()=0; //创建显卡
    virtual Computer* GetResult()=0; //获取产品
};

#endif // BUILDER_H
