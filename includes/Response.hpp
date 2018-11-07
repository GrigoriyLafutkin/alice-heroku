// Copyright 2018 RomAsya

#ifndef INCLUDES_RESPONSE_HPP_
#define INCLUDES_RESPONSE_HPP_

#include <iostream>
#include <string>
#include <vector>

#include <boost/optional.hpp>
#include <nlohmann/json.hpp>

#include "Request.hpp"
#include "Button.hpp"
#include "ButtonPicture.hpp"
#include "Card.hpp"
#include "Session.hpp"

namespace Alice {

class Response {
public:
  Response() {}
  void SetSession(Session);
  void SetVersion(std::string);
  void SetCard(Card);
  void PushButton(Button);
  std::string ToString();
  void SetText(std::string);
  void SetTts(std::string);
  void SetEndSession(bool);

private:
  std::string version_;
  Session session_;
  bool end_session_;
  std::string text_;
  std::string tts_;
  std::vector<Button> buttons_ref_;
  Card card_;
};

} // namespace Alice

#endif // INCLUDES_RESPONSE_HPP_
