/**
 * Stardust API
 * No description provided (generated by Openapi Generator https://github.com/openapitools/openapi-generator)
 *
 * The version of the OpenAPI document: 2023-07-25T00:59:12Z
 *
 * NOTE: This class is auto generated by OpenAPI-Generator 6.5.0.
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef GG_STARDUST_CORESDK_PlayerEndpointsApiGMock_H_
#define GG_STARDUST_CORESDK_PlayerEndpointsApiGMock_H_

#include <gmock/gmock.h>

#include "PlayerEndpointsApi.h"

namespace gg {
namespace stardust {
namespace coresdk {

using namespace gg::stardust::coresdk::model;


class  PlayerEndpointsApiMock : public IPlayerEndpointsApi
{
public:
    using Base = IPlayerEndpointsApi;

    PlayerEndpointsApiMock() = default;
    explicit PlayerEndpointsApiMock( std::shared_ptr<ApiClient> apiClient ) { };
    ~PlayerEndpointsApiMock() override = default;

    MOCK_METHOD1( playerCountGet, pplx::task<std::shared_ptr<SDPlayerCountResponse>> (
        boost::optional<utility::string_t> filter
    ) );
    MOCK_METHOD1( playerCreatePost, pplx::task<std::shared_ptr<SDPlayerCreateResponse>> (
        std::shared_ptr<SDPlayerCreateRequest> sDPlayerCreateRequest
    ) );
    MOCK_METHOD3( playerGetAllGet, pplx::task<std::vector<std::shared_ptr<SDPlayerGetAllResponse>>> (
        boost::optional<utility::string_t> start,
        boost::optional<utility::string_t> filter,
        boost::optional<utility::string_t> limit
    ) );
    MOCK_METHOD1( playerGetGet, pplx::task<std::shared_ptr<SDPlayerGetResponse>> (
        utility::string_t playerId
    ) );
    MOCK_METHOD1( playerGetIdGet, pplx::task<std::shared_ptr<SDPlayerGetIdResponse>> (
        utility::string_t uniqueId
    ) );
    MOCK_METHOD0( playerGetIdsGet, pplx::task<std::vector<std::shared_ptr<SDPlayerGetIdsResponse>>> (
    ) );
    MOCK_METHOD6( playerGetInventoryGet, pplx::task<std::vector<std::shared_ptr<SDPlayerGetInventoryResponse>>> (
        utility::string_t playerId,
        boost::optional<utility::string_t> start,
        boost::optional<utility::string_t> templateIds,
        boost::optional<utility::string_t> tokenIds,
        boost::optional<utility::string_t> limit,
        boost::optional<utility::string_t> returnExplorerLinks
    ) );
    MOCK_METHOD1( playerMutatePut, pplx::task<std::shared_ptr<Object>> (
        std::shared_ptr<SDPlayerMutateRequest> sDPlayerMutateRequest
    ) );
    MOCK_METHOD1( playerRemoveDelete, pplx::task<std::shared_ptr<Object>> (
        utility::string_t playerId
    ) );
    MOCK_METHOD1( playerWalletGetGet, pplx::task<std::shared_ptr<SDPlayerWalletGetResponse>> (
        utility::string_t playerId
    ) );
    MOCK_METHOD1( playerWithdrawPost, pplx::task<std::shared_ptr<Object>> (
        std::shared_ptr<SDPlayerWithdrawRequest> sDPlayerWithdrawRequest
    ) );
};

}
}
}

#endif /* GG_STARDUST_CORESDK_PlayerEndpointsApiGMock_H_ */

