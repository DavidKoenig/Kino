#pragma once
#ifndef THEATRE_RECEIVING_OFFICE_H
#define THEATRE_RECEIVING_OFFICE_H

#include "Customer.h"
#include "Order.h"
#include "Processing.h"
#include "TicketCounter.h"
#include "Output.h"




class CReceivingOffice
{
public:
    CReceivingOffice(void);
    ~CReceivingOffice(void);
    void runSession();
    void runProcess(CProcessing* processing_, CTicketCounter* ticketCounter_, COutput* output_);
    void createOrder();
};

#endif /* THEATRE_RECEIVING_OFFICE_H */