# Messager is simple app for study net programming

## directory structure: 
messager \
- client \ - main.cpp and an include files client side
  - private - implementations
  - test - unit test
- server \ - main.cpp and an include files server side
  - private
  - test
- common \ - shared files for both client and server, fasade/wraper for third-party libraries?
  - private
  - test
- deliveries - third-party libraries, but without QT and boost (for WIN, PRO file with include to boost ?)
- test - shared test for all, as performance and etc.

[NOTE] check "deliveries.pri" file to set correct path to BOOST librari in Windows OS.

## Tasks:
- [ ] покрыть юнит тестами, нагрузочный тест? Boost.Test or other?
- [x] посмотреть http://doc.crossplatform.ru/qt/4.6.x/qmake-project-files.html для настройки *.pro файла
- [ ] отдельные проекты для тестов
- [x] подключить boost::ASIO without boost [v1.12.2 date 2018-12-11] (https://think-async.com/Asio/) (https://github.com/chriskohlhoff/asio/) - используется полный буст на nix машине
- [ ] выбрать / загрузить библиотеки для json или  xml
- [ ] выбрать / загрузить библиотеки для парсинга параметров Boost.Program_options
- [ ] выбрать / загрузить библиотеки для конфигурирование libconfig(?) or libconfini (ini file?) 
- [ ] выбрать / загрузить библиотеки для логирование (https://habr.com/ru/post/313686/) P7 or Boost.Log 
- [ ] реализовать простой эхо сервер, простой клиент
- [ ] усложнить формат сообщений

про библиотеки смотреть https://en.cppreference.com/w/cpp/links/libs

# думать

клиентская часть:
- графический интерфейс на QT
- сетевая часть QT

серверная часть:
- консольное приложение
- сетевая часть BOOST::ASIO

общая часть:
- формат сообщений - json или  xml, возможность в будущем оборачивать не только текст, т.е. зарезервировать возможность
способы обработки пакетов - сжатие или/и шифрование, шаблон декоратор или композитор - выход одного подавать на вход другого

оформление https://help.github.com/en/articles/basic-writing-and-formatting-syntax
