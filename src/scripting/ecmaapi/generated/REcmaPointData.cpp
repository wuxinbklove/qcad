// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is copyable.
        
        #include "REcmaPointData.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
        
                  #include "REcmaEntityData.h"
                
                  #include "REcmaPoint.h"
                 void REcmaPointData::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RPointData*) 0)));
        protoCreated = true;
    }

    
        // primary base class REntityData:
        
            QScriptValue dpt = engine.defaultPrototype(
                qMetaTypeId<REntityData*>());

            if (dpt.isValid()) {
                proto->setPrototype(dpt);
            }
          
        /*
        REcmaPoint::initEcma(engine, proto);
          
        */
    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    
    // copy:
    REcmaHelper::registerFunction(&engine, proto, copy, "copy");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    
        // conversion for base class REntityData
        REcmaHelper::registerFunction(&engine, proto, getREntityData, "getREntityData");
        

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
            REcmaHelper::registerFunction(&engine, proto, getType, "getType");
            
            REcmaHelper::registerFunction(&engine, proto, isPointType, "isPointType");
            
            REcmaHelper::registerFunction(&engine, proto, getPosition, "getPosition");
            
            REcmaHelper::registerFunction(&engine, proto, getReferencePoints, "getReferencePoints");
            
            REcmaHelper::registerFunction(&engine, proto, moveReferencePoint, "moveReferencePoint");
            
            REcmaHelper::registerFunction(&engine, proto, castToShape, "castToShape");
            
            REcmaHelper::registerFunction(&engine, proto, getShapes, "getShapes");
            
        engine.setDefaultPrototype(
            qMetaTypeId<RPointData*>(), *proto);

        
                engine.setDefaultPrototype(qMetaTypeId<
                RPointData
                > (), *proto);
            
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RPointData",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaPointData::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPointData(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
        
            // generate constructor variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPointData
                    cppResult;
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    if( context->argumentCount() ==
        1
                && (
                
                        context->argument(
                        0
                        ).isVariant()
                        ||
                    
                        context->argument(
                        0
                        ).isQObject()
                        ||
                    
                        context->argument(
                        0
                        ).isNull()
                ) /* type: RVector */
            
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPointData: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ constructor:
    
            // copyable class:
            RPointData
                    cppResult(
                    a0
                    );
                
            result = engine->newVariant(
            context->thisObject(), qVariantFromValue(cppResult));
        
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RPointData(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
     QScriptValue REcmaPointData::getREntityData(QScriptContext *context,
            QScriptEngine *engine)
        
            {
                REntityData* cppResult =
                    qscriptvalue_cast<RPointData*> (context->thisObject());
                QScriptValue result = qScriptValueFromValue(engine, cppResult);
                return result;
            }
            

    // returns class name:
     QScriptValue REcmaPointData::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RPointData"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaPointData::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        
        list.append("REntityData");
    

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaPointData::getType
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPointData::getType", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPointData::getType";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPointData* self = 
                        getSelf("getType", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RS::EntityType'
    RS::EntityType cppResult =
        
               self->getType();
        // return type: RS::EntityType
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPointData.getType().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPointData::getType", context, engine);
            return result;
        }
         QScriptValue
        REcmaPointData::isPointType
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPointData::isPointType", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPointData::isPointType";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPointData* self = 
                        getSelf("isPointType", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->isPointType();
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPointData.isPointType().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPointData::isPointType", context, engine);
            return result;
        }
         QScriptValue
        REcmaPointData::getPosition
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPointData::getPosition", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPointData::getPosition";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPointData* self = 
                        getSelf("getPosition", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RVector'
    RVector cppResult =
        
               self->getPosition();
        // return type: RVector
                // not standard type nor reference
                result = qScriptValueFromValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPointData.getPosition().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPointData::getPosition", context, engine);
            return result;
        }
         QScriptValue
        REcmaPointData::getReferencePoints
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPointData::getReferencePoints", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPointData::getReferencePoints";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPointData* self = 
                        getSelf("getReferencePoints", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QList < RRefPoint >'
    QList < RRefPoint > cppResult =
        
               self->getReferencePoints();
        // return type: QList < RRefPoint >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isNumber()
        ) /* type: RS::ProjectionRenderingHint */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    RS::ProjectionRenderingHint
                    a0 =
                    (RS::ProjectionRenderingHint)
                    (int)
                    context->argument( 0 ).
                    toNumber();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < RRefPoint >'
    QList < RRefPoint > cppResult =
        
               self->getReferencePoints(a0);
        // return type: QList < RRefPoint >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPointData.getReferencePoints().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPointData::getReferencePoints", context, engine);
            return result;
        }
         QScriptValue
        REcmaPointData::moveReferencePoint
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPointData::moveReferencePoint", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPointData::moveReferencePoint";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPointData* self = 
                        getSelf("moveReferencePoint", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RVector */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RVector */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap0 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPointData: Argument 0 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a0 = 
                    *ap0;
                
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RVector*
                    ap1 =
                    qscriptvalue_cast<
                    RVector*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if (ap1 == NULL) {
                           return REcmaHelper::throwError("RPointData: Argument 1 is not of type RVector.",
                               context);                    
                    }
                    RVector 
                    a1 = 
                    *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'bool'
    bool cppResult =
        
               self->moveReferencePoint(a0
        ,
    a1);
        // return type: bool
                // standard Type
                result = QScriptValue(cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPointData.moveReferencePoint().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPointData::moveReferencePoint", context, engine);
            return result;
        }
         QScriptValue
        REcmaPointData::castToShape
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPointData::castToShape", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPointData::castToShape";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPointData* self = 
                        getSelf("castToShape", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'RShape *'
    RShape * cppResult =
        
               self->castToShape();
        // return type: RShape *
                // RShape:
                result = REcmaHelper::toScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPointData.castToShape().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPointData::castToShape", context, engine);
            return result;
        }
         QScriptValue
        REcmaPointData::getShapes
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            //REcmaHelper::functionStart("REcmaPointData::getShapes", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaPointData::getShapes";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
                    // public function: can be called from ECMA wrapper of ECMA shell:
                    RPointData* self = 
                        getSelf("getShapes", context);
                  

                //Q_ASSERT(self!=NULL);
                if (self==NULL) {
                    return REcmaHelper::throwError("self is NULL", context);
                }
                
    
    if( context->argumentCount() ==
    0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes();
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    1 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RBox */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap0 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPointData: Argument 0 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a0 = 
                    *ap0;
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes(a0);
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RBox */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap0 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPointData: Argument 0 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes(a0
        ,
    a1);
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
    
    if( context->argumentCount() ==
    3 && (
            context->argument(0).isVariant() || 
            context->argument(0).isQObject() || 
            context->argument(0).isNull()
        ) /* type: RBox */
     && (
            context->argument(1).isBool()
        ) /* type: bool */
     && (
            context->argument(2).isBool()
        ) /* type: bool */
    
    ){
    // prepare arguments:
    
                    // argument isCopyable and has default constructor and isSimpleClass 
                    RBox*
                    ap0 =
                    qscriptvalue_cast<
                    RBox*
                        >(
                        context->argument(
                        0
                        )
                    );
                    if (ap0 == NULL) {
                           return REcmaHelper::throwError("RPointData: Argument 0 is not of type RBox.",
                               context);                    
                    }
                    RBox 
                    a0 = 
                    *ap0;
                
                    // argument isStandardType
                    bool
                    a1 =
                    (bool)
                    
                    context->argument( 1 ).
                    toBool();
                
                    // argument isStandardType
                    bool
                    a2 =
                    (bool)
                    
                    context->argument( 2 ).
                    toBool();
                
    // end of arguments

    // call C++ function:
    // return type 'QList < QSharedPointer < RShape > >'
    QList < QSharedPointer < RShape > > cppResult =
        
               self->getShapes(a0
        ,
    a1
        ,
    a2);
        // return type: QList < QSharedPointer < RShape > >
                // List of ...:
                result = REcmaHelper::listToScriptValue(engine, cppResult);
            
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RPointData.getShapes().",
                   context);
            }
            //REcmaHelper::functionEnd("REcmaPointData::getShapes", context, engine);
            return result;
        }
         QScriptValue REcmaPointData::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RPointData* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RPointData(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaPointData::copy
    (QScriptContext *context, QScriptEngine *engine)
    
    {
        RPointData cp = qscriptvalue_cast<RPointData>(context->thisObject());
        return qScriptValueFromValue(engine, cp);
    }
     QScriptValue REcmaPointData::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RPointData* self = getSelf("RPointData", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RPointData* REcmaPointData::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RPointData* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RPointData >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RPointData.%1(): "
                        "This object is not a RPointData").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RPointData* REcmaPointData::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RPointData* selfBase = getSelf(fName, context);
                RPointData* self = dynamic_cast<RPointData*>(selfBase);
                //return REcmaHelper::scriptValueTo<RPointData >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RPointData.%1(): "
                    "This object is not a RPointData").arg(fName),
                    context);
            }

            return self;
            


        }
        