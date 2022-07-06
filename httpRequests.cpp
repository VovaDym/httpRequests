#include "stdafx.h"
#include"cpr/cpr.h"
#include<iostream>
int main()
{
    // Проверка работоспособности http-доступа на сайте https://www.httpbin.org/get
    auto response = cpr::Get(cpr::Url{ "https://www.httpbin.org/get" },
        cpr::Parameters{ { "hello", "world" } },
        cpr::VerifySsl(false));
    std::cout << response.text << std::endl;
    return 0;
}
