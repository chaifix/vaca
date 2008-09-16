namespace Vaca {

/**

@page page_tn_010 TN010: Auto-deleted objects

Vaca deletes (literally with C++ @c delete operator) some objects
automatically that you create (with C++ @c new operator).

Here is a list of some classes/methods with this behavior:

- Vaca::Widget::setLayout
- Vaca::Widget::setConstraint
- Vaca::Frame::setMenuBar
- Vaca::Menu::add(const String &, Keys::Type),
  * Vaca::Menu::addSeparator(),
  * Vaca::Menu::insert(const String &, int),
  * Vaca::Menu::insertSeparator() deletes MenuItem's automatically.
- Vaca::Frame::addCommand
- Vaca::Frame::addDockArea
- Vaca::MdiClient::setMdiClient

*/

}