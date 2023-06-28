/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-06-15T19:52:41Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */



#include "StardustCoreSDK/model/SDTokenWithdrawRequest.h"

namespace gg {
namespace stardust {
namespace coresdk {
namespace model {



SDTokenWithdrawRequest::SDTokenWithdrawRequest()
{
    m_Address = utility::conversions::to_string_t("");
    m_AddressIsSet = false;
    m_PlayerId = utility::conversions::to_string_t("");
    m_PlayerIdIsSet = false;
    m_TokenObjectsIsSet = false;
}

SDTokenWithdrawRequest::~SDTokenWithdrawRequest()
{
}

void SDTokenWithdrawRequest::validate()
{
    // TODO: implement validation
}

web::json::value SDTokenWithdrawRequest::toJson() const
{

    web::json::value val = web::json::value::object();
    
    if(m_AddressIsSet)
    {
        val[utility::conversions::to_string_t(U("address"))] = ModelBase::toJson(m_Address);
    }
    if(m_PlayerIdIsSet)
    {
        val[utility::conversions::to_string_t(U("playerId"))] = ModelBase::toJson(m_PlayerId);
    }
    if(m_TokenObjectsIsSet)
    {
        val[utility::conversions::to_string_t(U("tokenObjects"))] = ModelBase::toJson(m_TokenObjects);
    }

    return val;
}

bool SDTokenWithdrawRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t(U("address"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("address")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setAddress;
            ok &= ModelBase::fromJson(fieldValue, refVal_setAddress);
            setAddress(refVal_setAddress);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("playerId"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("playerId")));
        if(!fieldValue.is_null())
        {
            utility::string_t refVal_setPlayerId;
            ok &= ModelBase::fromJson(fieldValue, refVal_setPlayerId);
            setPlayerId(refVal_setPlayerId);
        }
    }
    if(val.has_field(utility::conversions::to_string_t(U("tokenObjects"))))
    {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t(U("tokenObjects")));
        if(!fieldValue.is_null())
        {
            std::vector<std::shared_ptr<SDTokenWithdrawObject>> refVal_setTokenObjects;
            ok &= ModelBase::fromJson(fieldValue, refVal_setTokenObjects);
            setTokenObjects(refVal_setTokenObjects);
        }
    }
    return ok;
}

void SDTokenWithdrawRequest::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("address")), m_Address));
    }
    if(m_PlayerIdIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("playerId")), m_PlayerId));
    }
    if(m_TokenObjectsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + utility::conversions::to_string_t(U("tokenObjects")), m_TokenObjects));
    }
}

bool SDTokenWithdrawRequest::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    bool ok = true;
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix.substr(namePrefix.size() - 1) != utility::conversions::to_string_t(U(".")))
    {
        namePrefix += utility::conversions::to_string_t(U("."));
    }

    if(multipart->hasContent(utility::conversions::to_string_t(U("address"))))
    {
        utility::string_t refVal_setAddress;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("address"))), refVal_setAddress );
        setAddress(refVal_setAddress);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("playerId"))))
    {
        utility::string_t refVal_setPlayerId;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("playerId"))), refVal_setPlayerId );
        setPlayerId(refVal_setPlayerId);
    }
    if(multipart->hasContent(utility::conversions::to_string_t(U("tokenObjects"))))
    {
        std::vector<std::shared_ptr<SDTokenWithdrawObject>> refVal_setTokenObjects;
        ok &= ModelBase::fromHttpContent(multipart->getContent(utility::conversions::to_string_t(U("tokenObjects"))), refVal_setTokenObjects );
        setTokenObjects(refVal_setTokenObjects);
    }
    return ok;
}

utility::string_t SDTokenWithdrawRequest::getAddress() const
{
    return m_Address;
}

void SDTokenWithdrawRequest::setAddress(const utility::string_t& value)
{
    m_Address = value;
    m_AddressIsSet = true;
}

bool SDTokenWithdrawRequest::addressIsSet() const
{
    return m_AddressIsSet;
}

void SDTokenWithdrawRequest::unsetAddress()
{
    m_AddressIsSet = false;
}
utility::string_t SDTokenWithdrawRequest::getPlayerId() const
{
    return m_PlayerId;
}

void SDTokenWithdrawRequest::setPlayerId(const utility::string_t& value)
{
    m_PlayerId = value;
    m_PlayerIdIsSet = true;
}

bool SDTokenWithdrawRequest::playerIdIsSet() const
{
    return m_PlayerIdIsSet;
}

void SDTokenWithdrawRequest::unsetPlayerId()
{
    m_PlayerIdIsSet = false;
}
std::vector<std::shared_ptr<SDTokenWithdrawObject>>& SDTokenWithdrawRequest::getTokenObjects()
{
    return m_TokenObjects;
}

void SDTokenWithdrawRequest::setTokenObjects(const std::vector<std::shared_ptr<SDTokenWithdrawObject>>& value)
{
    m_TokenObjects = value;
    m_TokenObjectsIsSet = true;
}

bool SDTokenWithdrawRequest::tokenObjectsIsSet() const
{
    return m_TokenObjectsIsSet;
}

void SDTokenWithdrawRequest::unsetTokenObjects()
{
    m_TokenObjectsIsSet = false;
}
}
}
}
}

