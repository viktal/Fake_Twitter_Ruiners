
#include "../include/model/IModel.h"
#include "../include/model/IComment.h"
#include "../include/model/ITag.h"
#include "../include/model/ITwitt.h"
#include "../include/model/IUser.h"
#include "../include/model/ITag.h"

using namespace fake_twitter::model;

IModel::~IModel() = default;
ITwitt::~ITwitt() = default;
IComment::~IComment() = default;
ITag::~ITag() = default;
IUser::~IUser() = default;