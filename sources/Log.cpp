// Copyright 2020 Your Name <your_email>

#include "Log.hpp"

Log& Log::getInstance() {
  static Log instance;
  return instance;
}

void Log::set(size_t level) { level_ = level; }

void Log::Write(std::string_view message) const {
  *out_ << message << std::endl;
}

void Log::WriteDebug(std::string_view message) const {
  if (level_ > 0) *out_ << message << std::endl;
}

Log::Log() {
  level_ = 0;
  out_ = &std::cout;
}
