#include "ReceivingOffice.h"


CReceivingOffice::CReceivingOffice(void)
{
}


CReceivingOffice::~CReceivingOffice(void)
{
}

void CReceivingOffice::runSession()
{
    CProcessing* processing = new CProcessing("Ex Drummer", "Persepolis", "The Goddess of 1967");
    CTicketCounter* ticketCounter = new CTicketCounter();
    COutput* output = new COutput();

    runProcess(processing, ticketCounter, output);

    delete processing;
    delete ticketCounter;
    delete output;
}

void CReceivingOffice::runProcess(CProcessing* processing_, CTicketCounter* ticketCounter_, COutput* output_)
{
    COrder* order = new COrder();
    CCustomer* customer = new CCustomer("Ex Drummer", 4, 1800);
    order = customer->placeOrd(order, output_);
    order = processing_->validOrd(order);
    order = ticketCounter_->receiveOrd(order, output_);
    customer->getOrd(order, output_);
    delete customer;

    customer = new CCustomer("The Goddess of 1967", 5, 1900);
    order = customer->placeOrd(order, output_);
    order = processing_->validOrd(order);
    order = ticketCounter_->receiveOrd(order, output_);
    customer->getOrd(order, output_);
    delete customer;

    customer = new CCustomer("The Goddess of 1967", 1, 2000);
    order = customer->placeOrd(order, output_);
    order = processing_->validOrd(order);
    order = ticketCounter_->receiveOrd(order, output_);
   customer->getOrd(order, output_);
    delete customer;

    customer = new CCustomer("Ex Drummer", 2, 1800);
    order = customer->placeOrd(order, output_);
    order = processing_->validOrd(order);
    order = ticketCounter_->receiveOrd(order, output_);
    customer->getOrd(order, output_);
    delete customer; 

    delete order;
}