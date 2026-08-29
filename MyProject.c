void main() {
    int i = 0;
    int ones = 0;
    int tens = 0;
    ADCON1 = 0b00000111;

    TRISA = 0b00000000;
    TRISB = 0b00000000;
    TRISC = 0b00000000;
    TRISD = 0b00000000;
    TRISE = 0b00000011;

    PORTA = 0b00000000;

    while(1) {
        //AUTO MODE
        if(PORTE.RE0 == 1) {

            PORTB = 0b00100001;
            for(i = 20; i >= 0; i--) {

                ones = i % 10;
                tens = i / 10;
                PORTD = (tens * 16) + ones;
                ones = (i + 3) % 10;
                tens = (i + 3) / 10;
                PORTC = (tens * 16) + ones;

                Delay_ms(1000);
                if(PORTE.RE0 == 0) break ;
            }


            PORTB = 0b00010001;
            for(i = 3; i >= 0; i--) {
                ones = i % 10;
                tens = i / 10;
                PORTD = (tens * 16) + ones;
                PORTC = (tens * 16) + ones;

                Delay_ms(1000);
                if(PORTE.RE0 == 0) break    ;
            }

            PORTB = 0b00001100;
            for(i = 12; i >= 0; i--) {

                ones = i % 10;
                tens = i / 10;
                PORTC = (tens * 16) + ones;

                ones = (i + 3) % 10;
                tens = (i + 3) / 10;
                PORTD = (tens * 16) + ones;

                Delay_ms(1000);
                if(PORTE.RE0 == 0) break ;
            }

            PORTB = 0b00001010;
            for(i = 3; i >= 0; i--) {
                ones = i % 10;
                tens = i / 10;
                PORTC = (tens * 16) + ones;
                PORTD = (tens * 16) + ones;

                Delay_ms(1000);
                if(PORTE.RE0 == 0) break  ;
            }
        }

        // MANUAL MODE
        else {
            if(PORTE.RE1 == 1) {
                     //WEST STREET
                PORTB = 0b00010100;
                for(i = 3; i >= 0; i--) {
                      ones = i % 10;
                      tens = i / 10;
                      PORTC = (tens * 16) + ones;
                      PORTD = (tens * 16) + ones;

                Delay_ms(1000);
                if(PORTE.RE1 == 0) break ;
                if(PORTE.RE0 == 1) break ;
            }
                PORTB = 0b00100001;
                while(PORTE.RE1 == 1 && PORTE.RE0 == 0) {
                }
            }
            else {
                        //SOUTH STREET
                 PORTB = 0b00100010;
                for(i = 3; i >= 0; i--) {
                      ones = i % 10;
                      tens = i / 10;
                      PORTC = (tens * 16) + ones;
                      PORTD = (tens * 16) + ones;

                Delay_ms(1000);
                if(PORTE.RE1 == 1) break ;
                if(PORTE.RE0 == 1) break ;
            }
                PORTB = 0b00001100;
                while(PORTE.RE1 == 0 && PORTE.RE0 == 0) {
                }
            }
        }
    }
}