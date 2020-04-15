#include <memory>

#include "gtest/gtest.h"
#include "gmock/gmock.h"

#include "fake_twitter/manager/SimpleSchemaTwitManager.h"
#include "fake_twitter/db/Field.h"
#include "mocks.h"

using namespace fake_twitter;
using namespace fake_twitter::manager;
using namespace fake_twitter::db;

using namespace ::testing;

class SimpleSchemaTwitMangerTest: public Test {
protected:
    std::shared_ptr<MockBDEngine> engineMock = nullptr;
    std::unique_ptr<SimpleSchemaTwitManager> twitManager = nullptr;

    void SetUp() override {
        engineMock = std::make_shared<MockBDEngine>();
        twitManager = std::make_unique<SimpleSchemaTwitManager>(SimpleSchemaTwitManager(engineMock));
    }

};

void call_handler(const std::string& sql, std::function<void(std::map<std::string, db::Field>)> handler)
{
    std::map<std::string, db::Field> mapa = {{"id", db::Field("123")}, {"author", db::Field("11")}};
    handler(mapa);
}

TEST_F(SimpleSchemaTwitMangerTest, test_loadByKey)
{
    EXPECT_CALL(*engineMock, select(_, _))
            .WillOnce(testing::Invoke(call_handler));

    auto twit = twitManager->load(123);
    ASSERT_EQ(twit->id(), 123);
    ASSERT_EQ(twit->author(), 11);


}