#pragma once
#include <string>

namespace Todoist {
  struct Project_Internal {
    Project_Internal(std::string json);
    std::string toString();
    int id;
    std::string name;
    int color;
    int parent_id;
    int order;
    int comment_count;
    bool shared;
    bool favorite;
    bool inbox_project;
    bool team_inbox;
    int sync_id;
  };
};
