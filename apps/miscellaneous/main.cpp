//#include <map>
//#include <string>
//#include <memory>
#include <iostream>
//#include "database/db_accessor/filesystem_db_accessor/filesystem_db_accessor.h"
//#include "calculator/window_group/window/parameters/enumerable_parameter/enumerable_value/enumerable_value.h"
//#include "calculator/window_group/window/parameters/single_parameter/single_value/single_value.h"
//#include "calculator/window_group/window/window.h"
//#include "calculator/window_group/window/parameters/concrete_parameters/glass_meter_price_single_parameter/glass_meter_price_single_parameter.h"
//#include "calculator/window_group/window/parameters/concrete_parameters/bottom_square_multiply_enumerable_parameter/bottom_square_multiply_enumerable_parameter.h"
//#include "calculator/window_group/window/parameters/concrete_parameters/top_square_multiply_enumerable_parameter/top_square_multiply_enumerable_parameter.h"
//#include "calculator/window_group/window/parameters/concrete_parameters/just_multiply_enumerable_parameter/just_multiply_enumerable_parameter.h"
//#include "calculator/window_group/window/parameters/concrete_parameters/square_multiply_enumerable_parameter/square_multiply_enumerable_parameter.h"
//#include "calculator/window_group/window/parameters/concrete_parameters/handles_enumerable_parameter/handles_enumerable_parameter.h"
//#include "calculator/sized_parameter_holder/parameter_holder/base_holder/base_holder_visitor/concrete_visitors/i_base_holder_printing_visitor/i_base_holder_printing_visitor.h"
//#include "calculator/balcony_group/balcony_group.h"
//#include "calculator/balcony_group/balcony_parameter_holder/balcony_parameter_holder.h"
//#include "calculator/balcony_group/balcony_parameter_holder/concrete_parameters/countable_square_multiply_enumerable_parameter/countable_square_multiply_enumerable_parameter.h"
//#include "calculator/calculator.h"
//#include "utils/database/database_creator/postgres_database_creator/postgres_database_creator.h"
//#include "database/db_accessor/postgres_db_accessor/postgres_db_accessor.h"
//
//using namespace db;
//using namespace calc;
//using namespace utils;

#include <pqxx/pqxx>

int main() {

  std::cout.setf(std::ios::fixed);
  std::cout.precision(2);

pqxx::connection c("dbname=postgres user=postgres password=admin host=localhost port=5432");
//  std::unique_ptr<IDatabaseCreator> db_creator = std::make_unique<PostgresDatabaseCreator>("localhost", "5432", "postgres", "admin");
//  db_creator->OpenDatabase("test_db")->CreateTable("test_table");
  return 0;
}


