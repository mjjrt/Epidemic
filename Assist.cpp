#pragma once

double GetRandomStep()
{
    std::random_device rseed;
    std::mt19937 rng(rseed());
    std::uniform_int_distribution<int> dist(-10,10);
    return dist(rng);
}