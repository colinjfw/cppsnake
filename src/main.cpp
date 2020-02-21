#include <HttpLib/httplib.h>
#include <JsonLib/json.hpp>
#include <iostream>
#include <Board.h>

int main()
{
  using namespace httplib;
  using namespace nlohmann;

  Server svr;

  svr.Post("/start", [](const Request& req, Response& res) {
    res.set_content("{}", "application/json");
  });

  svr.Post("/move", [](const Request& req, Response& res) {
    try {
      auto data = json::parse(req.body);
      auto board = Board{};
      board.turn = data["turn"].get<int>();
      board.height = data["board"]["height"].get<int>();
      board.width = data["board"]["width"].get<int>();
      board.you = Snake{};
      board.you.id = 1;
      board.you

      res.set_content("{\"move\": \"up\"}", "application/json");
    } catch (exception& e) {
      std::cout << e.what() << '\n';
      res.set_content("{\"move\": \"up\"}", "application/json");
      return;
    }
  });

  svr.Post("/end", [](const Request& req, Response& res) {
    res.set_content("{}", "application/json");
  });

  svr.Post("/ping", [](const Request& req, Response& res) {
    res.set_content("{}", "application/json");
  });

  svr.listen("0.0.0.0", 3000);
}
