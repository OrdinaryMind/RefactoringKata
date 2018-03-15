#include <test.h>

TEST(FunctionTest, SizeTest) {
  std::vector<Point> temp_vector;
  EXPECT_EQ(ExtractPositivePoints(temp_vector).size(), 0);
}

TEST(FunctionTest, GetEmptyVector1) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector2) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 0;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), 0);
}

TEST(FunctionTest, GetEmptyVector3) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 2) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  EXPECT_EQ(ExtractPositivePoints(test_vector).size(), 0);
}

TEST(FunctionTest, GetEmptyVector4) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 2 || i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector5) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 2 || i == 3 || i == 4) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector6) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    temp_point.y = -1;

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector7) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector8) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 2) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector9) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 2) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector10) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 1 || i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector11) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 2 || i == 3) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector12) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 2 || i == 4) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector13) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 0 || i == 2 || i == 5) {
      temp_point.y = -1;
    } else {
      temp_point.y = 1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector14) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 4 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector15) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 3 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector16) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 2 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector17) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1 || i == 5) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector18) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1 || i == 4) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector19) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1 || i == 3) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector20) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 4) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector21) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 3) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector22) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 2) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}

TEST(FunctionTest, GetEmptyVector23) {
  std::vector<Point> test_vector;

  Point temp_point;
  temp_point.x = 1;
  temp_point.y = 1;

  for (unsigned int i = kNull; i < kVectorSize; ++i) {
    if (i == 1) {
      temp_point.y = 1;
    } else {
      temp_point.y = -1;
    }

    test_vector.push_back(Point(temp_point));
  }

  std::vector<Point> result_vector = ExtractPositivePoints(test_vector);

  EXPECT_EQ(result_vector.size(), kNull);
}
