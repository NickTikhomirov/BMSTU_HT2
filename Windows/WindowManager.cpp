#include "WindowManager.h"
#include "CursorManager.h"


WindowManager::WindowManager(QObject *parent) : QObject(parent)
{
    level=0;
    first=0;
    second=0;
    passport = 0;
    agreement = 0;
    medicine = 0;
    rights = 0;
    psycho = 0;
    stenography = 0;
    //stamps = new AdditionalWindow(7);
    tutorial = new AdditionalWindow(7);

    //stamps->setCursor(CursorManager::greenArrow());
    tutorial->setCursor(CursorManager::greenArrow());

}



void WindowManager::dynamic_documents(){
    passport = new AdditionalWindow(1,level);
    agreement = new AdditionalWindow(2,level);
    medicine = new AdditionalWindow(3,level);
    rights = new AdditionalWindow(4,level);
    psycho = new AdditionalWindow(5,level);
    stenography = new AdditionalWindow(6,level);

    passport->setCursor(CursorManager::pencil());
    agreement->setCursor(CursorManager::pencil());
    medicine->setCursor(CursorManager::pencil());
    rights->setCursor(CursorManager::pencil());
    psycho->setCursor(CursorManager::pencil());
    stenography->setCursor(CursorManager::greenArrow());
}

void WindowManager::clear_dynamics(){
    delete passport;
    delete agreement;
    delete stenography;
    delete medicine;
    delete rights;
    delete psycho;
}

void WindowManager::s_kill(){
    kill();
}

void WindowManager::kill(){
    close1();
    close2();
}



void WindowManager::close1(){
    if(first!=0){
        if(first->isVisible()) first->close();
        first=0;
    }
}

void WindowManager::close2(){
    if(second!=0){
        if(second->isVisible()) second->close();
        second=0;
    }
}








void WindowManager::open(AdditionalWindow *pr){
    if(pr==0) return;
    if(first!=pr && second!=pr){
        if(first==0) {
            first = pr;
            first->show();
            connect(first, SIGNAL(closed()), this, SLOT(close1()));
        } else if(second==0) {
            second = pr;
            second->show();
            connect(second, SIGNAL(closed()), this, SLOT(close2()));
        }
    }
}


void WindowManager::close(AdditionalWindow *pr){
    if(pr==0) return;
    if(pr==first){
        first->close();
        first=0;
    }
    if(pr==second){
        second->close();
        second=0;
    }
}

void WindowManager::toggle(AdditionalWindow *pr){
    if(pr==0) return;
    if(pr==first || pr==second) close(pr);
    else open(pr);

}

void WindowManager::toggleW(char a){
    if(a==1){ toggle(passport);
    } else if(a==2){ toggle(agreement);
    } else if(a==3){ toggle(medicine);
    } else if(a==4){ toggle(rights);
    } else if(a==5){ toggle(psycho);
    } else if(a==6){ toggle(stenography);
//    } else if(a==7){ toggle(stamps);
    } else if(a==7){ toggle(tutorial);
    }
}

void WindowManager::openW(char a){
    if(a==1){ open(passport);
    } else if(a==2){ open(agreement);
    } else if(a==3){ open(medicine);
    } else if(a==4){ open(rights);
    } else if(a==5){ open(psycho);
    } else if(a==6){ open(stenography);
//    } else if(a==7){ open(stamps);
    } else if(a==7){ open(tutorial);
    }
}

void WindowManager::closeW(char a){
    if(a==1){ close(passport);
    } else if(a==2){ close(agreement);
    } else if(a==3){ close(medicine);
    } else if(a==4){ close(rights);
    } else if(a==5){ close(psycho);
    } else if(a==6){ close(stenography);
//    } else if(a==7){ close(stamps);
    } else if(a==7){ close(tutorial);
    }
}







void WindowManager::open_agreement(){toggleW(2);}
void WindowManager::open_stenography(){toggleW(6);}
//void WindowManager::open_stamps(){toggleW(7);}
void WindowManager::open_tutorial(){toggleW(7);}


void WindowManager::open_passport(){
    if(level!=0)
        if(level->agreementMistakes()){
            emit privacyBreak();
            return;
    }
    toggleW(1);
}
void WindowManager::open_medicine(){
    if(level!=0)
        if(level->agreementMistakes()){
            emit privacyBreak();
            return;
    }
    toggleW(3);
}
void WindowManager::open_license(){
    if(level!=0)
        if(level->agreementMistakes()){
            emit privacyBreak();
            return;
    }
    toggleW(4);
}
void WindowManager::open_x(){
    if(level!=0)
        if(level->agreementMistakes()){
            emit privacyBreak();
            return;
    }
    toggleW(5);
}
