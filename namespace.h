//
// Created by elysia on 2023/5/20.
//

#ifndef UNTITLED_NAMESPACE_H
#define UNTITLED_NAMESPACE_H
#include<string>
using namespace std;
namespace Elysia{
    int age = 50000;
    string name = "elysia";
}
namespace Kevin{
    int age = 50000;
    string name = "kevin";
}

namespace Elysia{
    bool life = true;
}

namespace Kevin{
    bool life = true;
}

namespace MOTH{
    using namespace Kevin;
    using namespace Elysia;

}

#endif //UNTITLED_NAMESPACE_H
