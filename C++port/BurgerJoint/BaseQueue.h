#pragma once


#include <iostream>
#include <thread>
#include <queue>
#include <mutex>
#include <condition_variable>
static std::mutex mx;
static std::condition_variable cv;
static std::queue<int> burgers;
static bool burgerReady = false;

