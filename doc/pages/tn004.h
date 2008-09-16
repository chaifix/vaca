namespace Vaca {

/**

@page page_tn_004 TN004: Signals are public

Maybe OOP fanatics'll explode of hungry when them see the @em public
data members like @c Close or @c Action for every signal. But I think
that it's the better way to access to signals because we don't need to
create/known a lot of routines to access/modify/update bindings for
the signal.

Let us see an alternative:

@code
class GoodFrame
{
  Signal mClose;
  
public:
  Signal &getCloseSignal() { return mClose; }
};

GoodFrame frame;
frame.getCloseSignal().connect(...);

@endcode

But it's the same to have mClose as public member, because we have
full access to the signal through it's reference. Another alternative
is to have methods like connectToCloseSignal and
disconnectToCloseSignal, but it only difficults more the programming.

To make your life easy, Vaca handles signals just like this:

@code
class Frame
{
public:
  Signal Close;
};

Frame frame;
frame.Close.connect(...);
@endcode

What is the advantage? You write less code and you must known only
one entry point: the Close member.

What is the disadvantage? It's a public data member (is that a disadvantage? :)

@section tn004_general_rules General rules

All data members must be private, only signals members must be public
and must begin with a capital letter. Don't use
protected data members, instead use a protected interface to access to
them.

*/

}