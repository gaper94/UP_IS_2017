# Упражнение 10 - Низове

## Задача 1
Напишете функция с прототип `size_t stringLength(const char*)`, която намира дължината на подадения низ

`Пример:`
``` C++
stringLength("C++ rocks") => 9
```

[Решение](Task1.cpp)

## Задача 2
Напишете функция с прототип `size_t wordsCount(const char*)`, която намира броят думи от които е съставен подаденият низ

`Пример:`
``` C++
wordsCount("Das auto") => 2
```

[Решение](Task2.cpp)

## Задача 3
Напишете функция с прототип `bool equalsIgnoreCase(const char*, const char*)`, която проверява дали 
два низа са съставени от един и същ набор от букви

`Пример:`
``` C++
equalsIgnoreCase("BeAtLes", "beatles") => true
```

[Решение](Task3.cpp)

## Задача 4
Напишете функция с прототип `void evaluate(const char*)`, която намира и изпечатва
   броят на малки и големи букви и броят на цифрите в даденият низ
   
`Пример:`
``` C++
evaluate("3 Doors Down") 
      => Брой малки букви: 7
         Брой големи букви: 2
         Брой цифри: 1
```

[Решение](Task4.cpp)

## Задача 5
Напишете функция с прототип bool `swapcase(char*)`, която променя всяка голяма
буква на малка и всяка малка на голяма в подадения низ

`Пример:`
``` C++
swapcase("Yellow Submarine") => yELLOW sUBMARINE
```

[Решение](Task5.cpp)

## Задача 6
Напишете функция с прототип `void findWords(const char*)`, която намира
най-дългата и най-късата дума от дадения низ. Ако има две или
повече думи с еднаква дължина, които са най-къси или най-дълги,
да се изпечата последната намерена дума

`Пример:`
``` C++
findWords("yesterday love was such an easy game to play")
      => Най-дълга дума: yesterday
         Най-къса дума: to
```

[Решение](Task6.cpp)

## Задача 7
Напишете функция с прототип `void replace(char* src, char from, char to)`, която
подменя всяко срещане на символа `from` със символa `to`

`Пример:`
``` C++
replace("We_love_C  ", ' ', '+') => "We_love_C++"
```

[Решение](Task7.cpp)

## Задача 8
 Напишете функция с прототип `void truncate(char* src, int n)`, която скъсява
подадения низ до низ с дължина n. Ако низът вече е по-къс от n, той
не трябва да се модифицира

`Пример:`
``` C++
truncate("The Dark Knight Rises", 15 ) => The Dark Knight
```

[Решение](Task8.cpp)

## Задача 9
Напишете функция с прототип `void deleteChar(char* a, char c)`, която изтрива
всяко срещане на символа 'c' в даденият низ

`Пример:`
``` C++
deleteChar("the* qu*ick* bro*wn ***fox **jumped o**ver **the lazy *d*og", '*')
      => "the quick brown fox jumped over the lazy dog"
```

[Решение](Task9.cpp)

## Задача 10
Напишете функция с прототип `bool startsWith(const char* src, char* start)`, която връща
стойност true когато src започва с start, в противен случай връща стойност false

`Пример:`
``` C++
startsWith("Fear of the Dark", "Fea") => true
```

[Решение](Task10.cpp)
