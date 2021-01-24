#include "TodoistApi.hpp"

using namespace Todoist;

API::API(std::string apiKey, std::string configFile) {

}
void API::createTask(Task task) {

}
void API::createTask(std::string content,
		     int parentId,
		std::string dateString,
		int priority,
		std::vector<int> labelId,
		int parent_id) {

}

std::vector<Task> API::getTasks() {
  std::vector<Task> todos;
  return todos;
}

void API::updateTask(Task task) {
  
}
		

