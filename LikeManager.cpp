#include "fake_twitter/manager/LikeManager.h"

using namespace fake_twitter;
using namespace fake_twitter::manager;

bool LikeManager::like(const PKey &user_id, const PKey &twitt_id) { return false;}
bool LikeManager::unlike(const PKey &user_id, const PKey &twitt_id) { return true;}