// Copyright 2020 Your Name <your_email>

#ifndef TEMPLATE_DATA_HPP
#define TEMPLATE_DATA_HPP
#include <algorithm>
#include <fstream>
#include <iostream>
#include <set>
#include <sstream>
#include <string>
#include <string_view>
#include <vector>

static constexpr size_t kMinLines = 10;

struct Item {
  std::string id;
  std::string name;
  float score = 0;
};

#endif  // TEMPLATE_DATA_HPP