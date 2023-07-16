#ifndef HPP_IROUTER_DB
#define HPP_IROUTER_DB
#include <cstdlib>
#include <string>

#include "IHandler.hpp"
#include "Types/Request.hpp"
#include "Types/Response.hpp"

namespace httpserver {

class IRouter {
 public:
  virtual void registerRoute(std::string url, Method method,
                             IHandler handler) = 0;
  virtual Response route(std::string) = 0;
};
}  // namespace httpserver
#endif
