#pragma once

#include <string>
#include <vector>
namespace Todoist {

  struct Task {
    int id;
    std::string content;
    std::string dueString;
    bool complete;
    std::vector<std::string> labels;
    std::string project;
    int parentId;
  };

  struct Project {
    int id;
    std::string name;
    id parent_id;
  };
  class API
  {
  public:
    API(std::string apiKey, std::string configFile);

    void createTask(Task task);
    void createTask(std::string content,
		    int parentId,
		    std::string dateString,
		    int priority,
		    std::vector<int> labelId,
		    int parent_id);
    std::vector<Task> getTasks();
    void updateTask(Task task);

  };
}
