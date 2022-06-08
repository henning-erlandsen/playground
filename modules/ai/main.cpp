#include <cstdio>
#include <map>
#include <string>

template<class... P>
class Registry {
    using fntype = void(*)(P...);

public:
    void add_function(std::string name, fntype func) {
        functions.emplace(name, func);
    }

    void invoke(std::string name, P... params) {
        functions.at(name)(params...);
    }

private:
    std::map<std::string, fntype> functions;
};


void string_method1(std::string s) {
    printf("Method 1 with %s", s.c_str());
}

void string_method2(std::string s) {
    printf("Method 2 with %s", s.c_str());
}


int main(int argc, char** argv)
{
    Registry<std::string> reg;
    reg.add_function("one", &string_method1);
    reg.add_function("two", &string_method2);

    reg.invoke("one", "Hello");
    reg.invoke("two", "World");
}
