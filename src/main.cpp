#include <HttpLib/httplib.h>
#include <iostream>
#include <Board.h>

int main()
{
  using namespace httplib;

  Server svr;

  svr.Get("/start", [](const Request& req, Response& res) {
    auto board = draw(10, 10);
    res.set_content("Hello World!", "text/plain");
  });
  svr.listen("0.0.0.0", 3000);
}
