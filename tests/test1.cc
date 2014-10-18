// Copyright 2014 Attila Gobi <attila.gobi@gmail.com>
#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include <seagull/test.h>

TEST(seegull, test) {
    EXPECT_EQ(42, test());
}

