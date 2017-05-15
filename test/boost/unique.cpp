//
// Created by youhei on 17/05/15.
//

#include <memory>
#include <boost/signals2/signal.hpp>
#include <boost/make_shared.hpp>
#include <iostream>

class Bottun {
 public:
  boost::signals2::signal<void(void)> clicked;
  void clieck(){ clicked(); };
};

class Test1 {
 public:
  void draw() { std::cout << "test1" ;};
};

class Test2 {
 public:
  void draw() { std::cout << "test2" ;};
};

class Test3 {
 public:
  Test3(Bottun *button) { button->clicked.connect (boost::bind( &Test3::draw, this )); }
  void draw() {std::cout << "test3";};
};

int main()
{
  Bottun button;
  Test1 *test1 = new Test1();
//  boost::shared_ptr<Test2> test2 = boost::shared_ptr<Test2>();

  Test2 *test2 = new Test2();
  button.clicked.connect (boost::bind( &Test1::draw , test1));
//  boost::signals2::connection con = button.clicked.connect (
//      boost::signals2::signal::slot_type(&Test2::draw, test2.get())
//  );
  boost::signals2::connection con = button.clicked.connect (boost::bind(&Test2::draw, test2));

  Test3 *test3 = new Test3(&button);
  con.disconnect ();


  button.clieck ();

}