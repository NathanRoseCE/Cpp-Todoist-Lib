#pragma once
#include <string>
#include <vector>
namespace Todoist {
  struct Task_Due {
    std::string date;
    bool recurring;
    std::string dateTime; 
    std::string string;
    std::string timeZone;
  };
  struct Task_Internal {
    Task_Internal(std::string jsonString);
    std::string toString();
    
    int assignee;
    int comment_count;
    bool completed;
    std::string content;
    Task_Due due;
    int id;
    std::vector<int> label_ids;
    int order;
    int priority;
    int project_id;
    int section_id;
    int parent_id;
    std::string url;
    
  };
}
