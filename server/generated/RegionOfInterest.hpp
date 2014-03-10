/* Autogenerated with Kurento Idl */

#ifndef __REGION_OF_INTEREST_HPP__
#define __REGION_OF_INTEREST_HPP__

#include <jsoncpp/json/json.h>
#include <JsonRpcException.hpp>
#include <memory>

class JsonSerializer;

namespace kurento {
class RegionOfInterest;
} /*kurento */

void Serialize(std::shared_ptr<kurento::RegionOfInterest>& object, JsonSerializer& s);

namespace kurento {
class Point;


class RegionOfInterest
{

public:

  RegionOfInterest (const std::vector<std::shared_ptr<Point>>& points, const std::string& id){
    this->points = points;
    this->id = id;
  };

  RegionOfInterest (const Json::Value &value);

  void setPoints (const std::vector<std::shared_ptr<Point>>& points) {
    this->points = points;
  };

  std::vector<std::shared_ptr<Point>> getPoints () {
    return points;
  };

  void setId (const std::string& id) {
    this->id = id;
  };

  std::string getId () {
    return id;
  };

private:
  std::vector<std::shared_ptr<Point>> points;
  std::string id;

  RegionOfInterest() {};

  friend void ::Serialize(std::shared_ptr<RegionOfInterest>& object, JsonSerializer& s);
};

} /* kurento */

#endif /*  __REGION_OF_INTEREST_HPP__ */